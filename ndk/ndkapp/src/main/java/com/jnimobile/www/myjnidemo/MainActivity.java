package com.jnimobile.www.myjnidemo;

import android.app.Activity;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.widget.TextView;

import com.jnimobile.www.myjnidemo.helper.JniLib;

/**
 *
 */
public class MainActivity extends Activity {

    private TextView tv = null;
    private int[] array = {1, 2, 3, 4, 5, 6, 7, 8, 8, 7, 6, 5, 4, 3, 2, 1};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv = (TextView) findViewById(R.id.tv);
        JniLib lib = new JniLib();
        tv.setText(getStringFromNative() + "1到100的累加和为" + lib.getInt() + lib.getBoolean() + "\n" +
                "数组的平均数：" +lib.getAvg(array));

    }

    public native String getStringFromNative();


    static {
        System.loadLibrary("JniHelper");
    }

    /**
     * @param i
     * @param bool
     * @param str
     */
    public void get(int i, boolean bool, String str) {
    }
}
