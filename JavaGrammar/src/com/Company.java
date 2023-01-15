package com;
/*
本模块名称为Companany.java，它是平行于com.what包的一个模块文件，也就是说，本模块位于com.what包之外
 */
import com.what.Module;

public class Company {
    public int Total;
    public String Depart;
    public String desc="公司描述";
    public void getDepart(){
        System.out.println("管理部 财务部 技术部 宣传部");
    }
    public static void main(String[] args) {
    	Module module=new Module();
        module.output();
    }
}