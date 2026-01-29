/*
 * Copyright (c) 2006-2024 RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-11-25     hywing       first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

int main(void)
{
    rt_kprintf("Welcome to the world of IoT Stuff!\r\n");

    while (1)
    {
        // rt_kprintf("Welcome to the world of IoT Stuff!\r\n");
        rt_thread_mdelay(2000);
    }
}
