
Import java.io.BufferedReader;  

Import java.io.File;  

Import java.io.FileReader;  

Import java.io.IOException;  

Import java.util.Scanner;  

  

Public class Assignment1 {  

  

 Public static void main(String[] args) throws IOException {  

 Scanner sc = new Scanner(System.in);  

 System.out.println(“Enter the file name”);  

 String filename = sc.nextLine();  

 System.out.println(“Enter the character to be counted”);  

 Char needle = sc.nextLine().charAt(0);  

  

 File file = new File(filename);  

 Int charCount = 0;  

  

 BufferedReader br = new BufferedReader(new FileReader(file));  

  

 Int ch;  

 Do {  

 	Ch = br.read();  

 	  

 	If (ch >= 65 && ch <= 90) ch += 32;  

 	If (needle >= 65 && needle <= 90) needle += 32;  

 	  

 	If (ch == needle)  

 	 	charCount++;  

 } while (ch != -1);  

 	 	  

 System.out.println(“File ‘” + filename + “’ has “ +  	 	charCount + “ instances of letter ‘” + needle + “’.”);  br.close();  sc.close();  

 }}    