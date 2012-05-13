#if (${PACKAGE_NAME} && ${PACKAGE_NAME} != "")package ${PACKAGE_NAME};#end
#parse("File Header.java")

import java.io.*;
import java.util.StringTokenizer;
public class ${NAME} extends Thread{
    public ${NAME}(String inputFileName, String outputFileName) {
        try {
            if (inputFileName != null) {
                this.input = new BufferedReader(new FileReader(inputFileName));
            } else {
                this.input = new BufferedReader(new InputStreamReader(System.in));
            }
            if (outputFileName != null) {
                this.output = new PrintWriter(outputFileName);
            } else {
                this.output = new PrintWriter(System.out);
            }
            this.setPriority(Thread.MAX_PRIORITY);
         } catch(Throwable e) {
            System.err.println(e.getMessage());
            e.printStackTrace();
            System.exit(666);
         }
     }
     
     private void solve() throws Throwable {
     
     }
     
     public void run() {
        try {
            solve();
        } catch(Throwable e) {
            System.err.println(e.getMessage());
            e.printStackTrace();
            System.exit(666);
        } finally {
            output.close();
        }
     }
     
     public static void main(String ... args) {
        new ${NAME}(null, null).start();
     }
     
     private int nextInt() throws IOException {
        return Integer.parseInt(next());
     }
     
     private double nextDouble() throws IOException {
        return Double.parseDouble(next());
     }
     
     private long nextLong() throws IOException {
        return Long.parseLong(next());
     }
     
     private String next() throws IOException {
        while (tokens == null || !tokens.hasMoreTokens()) {
            tokens = new StringTokenizer(input.readLine());
        }
        return tokens.nextToken();
     }
         
     private StringTokenizer tokens;  
     private BufferedReader input;
     private PrintWriter output;       
}
