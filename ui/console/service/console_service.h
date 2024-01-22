#ifndef __CONSOLE_SERVICE_H__
#define __CONSOLE_SERVICE_H__

#include <stdbool.h>

enum console_service
{
    CONSOLE_SERVICE_GET_USER_INPUT,
    CONSOLE_SERVICE_GET_USER_INPUT_WITH_MSG,
    CONSOLE_SERVICE_GET_HIDDEN_USER_INPUT_WITH_MSG,
    CONSOLE_SERVICE_PUT_OUTPUT_MSG,
    CONSOLE_SERVICE_END
};

#define CONSOLE_SERVICE_CALL_BUFFER_COUNT          (CONSOLE_SERVICE_END)
#define CONSOLE_SERVICE_CALL_BUFFER                ((CONSOLE_SERVICE_END) - 1)

bool check_user_input_close(void);
void print_welcome_msg(void);
void print_menu_msg(void);
int input_user_command (void);

#endif