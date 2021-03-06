package annotation.checkdemo;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.lang.reflect.Method;

/**
 * @Date: 2020年02月23日  12:26
 * @Description: 测试框架
 **/
public class TestCheck {
    public static void main(String[] args) throws IOException {
        //1.创建计算器对象
        Calculator c = new Calculator();
        //2.获取字节码文件对象
        Class cls = c.getClass();
        //3.获取所有方法
        Method[] methods = cls.getMethods();

        int number = 0;//用于记录异常次数
        BufferedWriter bw = new BufferedWriter(new FileWriter("bug.txt"));
        for (Method method : methods) {
            //4. 判断是否有Check注解
            if (method.isAnnotationPresent(Check.class)) {
                //5.执行
                try {
                    method.invoke(c);
                }
                catch (Exception e) {
                    //6. 捕获异常
                    //记录到文件中
                    number++;

                    bw.write(method.getName() + "方法出异常了");
                    bw.newLine();
                    bw.write("异常的名称："+e.getCause().getClass().getSimpleName());
                    bw.newLine();
                    bw.write("异常的原因是"+e.getCause().getMessage());
                    bw.newLine();
                    bw.write("-----------------------");
                    bw.newLine();
                }

            }
        }

        bw.write("本次测试一共出现"+number+"次异常");
        bw.flush();
        bw.close();

    }
}
