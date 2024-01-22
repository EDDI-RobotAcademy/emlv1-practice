#include "console_service.h"
#include "console_service_handler.h"

#include <stdio.h>
#include <stdlib.h>

char welcome_msg[] = "EMLV1 5기 게시판에 오신 것을 환영합니다!\n";

char menu_msg[] = "다음 명령들 중 하나를 입력해주세요!\n"
                       "0 (게시물 리스트 보기)\n"
                       "1 (프로그램 종료)\n";

int user_input_command = 1;

bool check_user_input_close (void)
{
    return user_input_command == 0;
}

void print_welcome_msg (void)
{
    printf("%s", welcome_msg);
}

void print_menu_msg (void)
{
    printf("%s", menu_msg);
}

int input_user_command (void)
{
    char real_user_input[MAX_USER_INPUT] = { 0 };
    console_get_user_input(real_user_input);
    return atoi(real_user_input);
}