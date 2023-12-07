#ifndef __CONSOLE_SERVICE_HANDLER_H__
#define __CONSOLE_SERVICE_HANDLER_H__

inline void console_get_user_input (char *user_input, unsigned int user_input_max_size);
inline void console_put_output_msg (char *output_msg, unsigned int output_msg_size);
void console_get_hidden_user_input_with_msg(char *output_msg, char *hidden_user_input, unsigned int user_input_max_size);
void console_get_user_input_with_msg (char *output_msg, char *user_input, unsigned int user_input_max_size);

#endif