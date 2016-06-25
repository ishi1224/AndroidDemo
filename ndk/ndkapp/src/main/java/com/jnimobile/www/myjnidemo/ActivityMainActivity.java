package com.jnimobile.www.myjnidemo;

import android.os.Bundle;
import android.app.Activity;
import android.widget.TextView;

public class ActivityMainActivity extends Activity  {

    private TextView tv;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tv = (TextView) findViewById(R.id.tv);
    }

}
