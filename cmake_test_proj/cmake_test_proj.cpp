// cmake_test_proj.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "cmake_test_proj.h"
#include <string>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if (argc == 2) {
        std::string options = argv[1];
        if (options == "-v") {
            FILE* fp;
            char c;
            // resourcesから読み出していることに注意!
            if ((fp = fopen("../resources/about.txt", "r")) == NULL) { // configファイルの読み出し
                printf("file open error!!\n");
                return 1;
            }
            while ((c = fgetc(fp)) != EOF) {
                putchar(c);
            }
            fclose(fp);
        }
    }


    FILE* fp;  /* ファイルポインタの宣言 */
    char c;
    if ((fp = fopen("../resources/hello_cmake.txt", "r")) == NULL) {  /* ファイルのオープン */
        printf("file open error!!\n");
        return 1;
    }
    /* fgetc()で取得 */
    //printf("Read by fgetc() ----------------------------------------\n");
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);

    return 0;
}
