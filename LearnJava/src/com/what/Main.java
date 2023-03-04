package com.what;
/*
在包com.what内，这里定义了一个java模块文件,包含类、接口以及含main方法的特殊类
 */
interface inter{
    void method();
}
class A{
    void out(){
        System.out.println("调用模块文件Main.java中的非public类A的out方法");
    }
}

public class Main{
    public static void main(String[] args) {
    	Main obj=new Main();
    	obj.method();
    }
    public void method(){
        A a=new A();
        a.out();
    }
}