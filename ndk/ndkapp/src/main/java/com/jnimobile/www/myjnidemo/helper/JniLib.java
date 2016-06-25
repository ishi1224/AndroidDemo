package com.jnimobile.www.myjnidemo.helper;

/**
 * Created by lenovo on 2015/11/13.
 */
public class JniLib {

    public native int getInt();
    public native boolean getBoolean();
    public native void show();
    public native int getAvg(int... data);
}
