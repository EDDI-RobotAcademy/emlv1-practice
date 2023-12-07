#include "console_service_handler.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>

inline void console_get_user_input (char *user_input, unsigned int user_input_max_size)
{
    read(STDIN, user_input, user_input_size);
}

inline void console_put_output_msg (char *output_msg, unsigned int output_msg_size)
{
    write(STDOUT, output_msg, output_msg_size);
}

unsigned int console_get_user_input_with_msg (char *output_msg, char *user_input, unsigned int user_input_max_size)
{
    console_put_output_msg(output_msg, strlen(output_msg));
    console_get_user_input(user_input, user_input_size);
}

unsigned int console_get_hidden_user_input_with_msg(char *output_msg, char *hidden_user_input, unsigned int user_input_max_size)
{
    struct termios oFlags, nFlags;
    int length = 0;

    tcgetattr(STDIN_FILENO, &oldt);
    nflags = oflags;
    nflags.c_lflag &= ~ECHO;
    nflags.c_lflag |= ECHONL;

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    console_put_output_msg(output_msg, strlen(output_msg));
    console_get_user_input(user_input, user_input_size);

    length = strlen(hidden_user_input);
    hidden_user_input[length] = '\0';

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}