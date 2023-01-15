package com.what;

/*
本模块名称是Module.java，它是平行于模块文件Main.java的一个模块文件
 */
class Normal{
    String str="这是Normal类的属性值";
    void method() {
        System.out.println("调用Normal类中的method方法！");
    }
}
public class Module {
    public static void main(String[] args) {
        A a = new A(); //同一包内可以访问其它类(具体是访问模块文件Main.java内的A类) A类是个普通类，仅限包内访问！！
        a.out();
    }
    public void output() {
        System.out.println("调用Module模块里的public类Module中的output方法！");
    }
    public void useNormal_Out_Of_Package(){
        Normal normal=new Normal();//使用本模块里的非Public类Normal创建对象normal
        System.out.println("成功从包外访问模块文件Module.java中的非public类--Normal类");
        System.out.println(normal.str);
        normal.method();
    }
}

