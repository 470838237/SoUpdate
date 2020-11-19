package com.example.updateso;

import com.honor.plugin.soupdate.FileUtils;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * Example local unit test, which will execute on the development machine (host).
 *
 * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>
 */
public class ExampleUnitTest {
    @Test
    public void addition_isCorrect() {
//        assertEquals(4, 2 + 2);

//        int count = FileUtils.computeFileCount("C:\\Users\\usera\\Desktop\\test\\bin\\Data\\Managed",".tmp");
//        System.out.println("computeFileCount.count="+count);



        FileUtils.deleteFile("C:\\Users\\usera\\Desktop\\test\\bin\\Data\\Managed");
    }

}