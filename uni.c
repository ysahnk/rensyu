#include <stdio.h>
#include <string.h>

int main() {
    // ひらがな「あ」のUTF-8文字列
    unsigned char hiragana[] = "あ";  // "あ" はUTF-8で3バイト
    unsigned char katakana[4];  // カタカナ用のバッファ（最大3バイト＋NULL文字）

    // ひらがなの文字コードを取得（UTF-8の1文字）
    unsigned char hirogana_first_byte = hiragana[0]; // 0xE3
    unsigned char hirogana_second_byte = hiragana[1]; // 0x81
    unsigned char hirogana_third_byte = hiragana[2]; // 0x82

    // ひらがな「あ」（0x3042）のUTF-8からカタカナ「ア」（0x30A2）に変換
    katakana[0] = hirogana_first_byte;     // ひらがなの最初のバイト
    katakana[1] = hirogana_second_byte + 1;    // ひらがなの2番目のバイト
    katakana[2] = hirogana_third_byte + 0x20; // 最後のバイトに0x60を加算（ひらがな->カタカナ）
    katakana[3] = '\0';  // 文字列の終端

    // 結果を表示
    printf("ひらがな: %s, カタカナ: %s\n", hiragana, katakana);

    return 0;
}
