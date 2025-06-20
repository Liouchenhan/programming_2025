#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>  // 用於 getch() 與清除螢幕

#define PASSWORD "2024" // 密碼

void clearScreen() {
    system("cls"); // 清除螢幕（Windows 專用）
}

int main() {
    // 顯示個人風格畫面
    printf("***************************************\n");
    printf("**           Welcome 歡迎!           **\n");
    printf("**                                   **\n");
    printf("**           By 柳辰翰               **\n");
    printf("**                                   **\n");
    printf("**             ^     ^               **\n");
    printf("**            (()__(())              **\n");
    printf("**           //       \\\\              **\n");
    printf("**          //(  0 0  )\\\\             **\n");
    printf("**          // (  w  ) \\\\             **\n");
    printf("**         \\\\ __________//            **\n");
    printf("**         000000000000000           **\n");
    printf("**        00000000000000000          **\n");
    printf("**     11 000000000000000000 11      **\n");
    printf("**   11    0000000000000000    11    **\n");
    printf("** 11    0000000000000000000     11  **\n");
    printf("**           1111   1111             **\n");
    printf("**           1111   1111             **\n");
    printf("**           1111   1111             **\n");
    printf("**           1111   1111       H1.26 **\n");
    printf("** __________________________________**\n");
    for (int i = 0; i < 5; i++) {
        printf("**                                   **\n");
    }
    printf("***************************************\n");
    printf("按任何按鍵繼續內容...");
    getch(); // 等待使用者輸入
    clearScreen();

    // 密碼輸入
    char inputPassword[100];
    printf("輸入4位密碼: ");
    scanf("%s", inputPassword);

    if (strcmp(inputPassword, PASSWORD) != 0) {
        printf("(錯誤的密碼，程式將終止)\n");
        printf("%c", '\a');
        return 0;
    }

    printf("(密碼正確，歡迎!!!)\n");
    getch();
    clearScreen();

    // 顯示主選單
    printf("-------------------------------\n");
    printf("|  'A'...'Z'  : Uppercase     |\n");
    printf("|  'a'...'z'  : Lowercase     |\n");
    printf("|  '0'...'9'  : Digit         |\n");
    printf("|  Otherwise  : Your name     |\n");
    printf("-------------------------------\n");

    // 接收使用者輸入
    char userInput;
    printf("輸入一個字元: ");
    fflush(stdin); // 清空輸入緩衝區（避免 scanf 的問題）
    scanf("%c", &userInput);

    if (userInput >= 'A' && userInput <= 'Z') {
        printf("Uppercase\n");
    } else if (userInput >= 'a' && userInput <= 'z') {
        printf("Lowercase\n");
    } else if (userInput >= '0' && userInput <= '9') {
        printf("Digit\n");
    } else {
        printf("H1.26 柳辰翰\n");
    }

    printf("按任何按鍵離開....");
    getch();
    return 0;
}
//這次的作業讓我理解: 
//1.排版的重要性，雜亂不堪的排版會導致寫程式中會需要更多的時間去看去檢查，沒有規律性也會讓人感到而外疲憊 。 
//2.if else根據不同的輸入類型做出反應。特別是在字符判斷方面，使用 if 來判斷字元是否為大寫字母、小寫字母或數字。 
//3.system("cls")）不使用這樣使用者就會一直看到舊的畫面，system("cls")來清除螢幕讓程式顯得更加整潔，讓操作者有更好的操作體驗。 
//這只是程式語言中的微不足道的一個小部分 ，這個領域很困難，水也很深，我得多加強這個領域的內容來面對未來不論是課業還是將來事業的挑戰。 
