#ifndef __CONSOLE_SERVICE_CALL_TABLE_H__
#define __CONSOLE_SERVICE_CALL_TABLE_H__

#include <stdio.h>
#include "console_service.h"

typedef void (* member_call_ptr_t) (void);

void console_protocol_not_implemented (void)
{
    printf("아직 구현되지 않은 스펙입니다!\n");
}

const console_service_call_ptr_t cosnole_service_call_table[CONSOLE_SERVICE_CALL_BUFFER_COUNT] = {
        [0 ... CONSOLE_SERVICE_CALL_BUFFER] = &console_protocol_not_implemented,
#include "console_service_call_table_mapper.h"
};

#endif