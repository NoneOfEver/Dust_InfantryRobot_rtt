/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-10-30     SummerGift   first version
 * 2019-01-05     zylx         modify dma support
 * 2020-05-02     whj4674672   support stm32h7 uart dma
 */

#ifndef __UART_CONFIG_H__
#define __UART_CONFIG_H__

#include <rtthread.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(BSP_USING_UART1)
#ifndef UART1_CONFIG
#define UART1_CONFIG                                                \
    {                                                               \
        .name = "uart1",                                            \
        .Instance = USART1,                                         \
        .irq_type = USART1_IRQn,                                    \
    }
#endif /* UART1_CONFIG */
#endif /* BSP_USING_UART1 */

#if defined(BSP_UART1_RX_USING_DMA)
#ifndef UART1_DMA_RX_CONFIG
#define UART1_DMA_RX_CONFIG                                         \
    {                                                               \
        .Instance = UART1_RX_DMA_INSTANCE,                          \
        .request = UART1_RX_DMA_REQUEST,                            \
        .dma_rcc = UART1_RX_DMA_RCC,                                \
        .dma_irq = UART1_RX_DMA_IRQ,                                \
    }
#endif /* UART1_DMA_RX_CONFIG */
#endif /* BSP_UART1_RX_USING_DMA */

#if defined(BSP_UART1_TX_USING_DMA)
#ifndef UART1_DMA_TX_CONFIG
#define UART1_DMA_TX_CONFIG                                         \
    {                                                               \
        .Instance = UART1_TX_DMA_INSTANCE,                          \
        .request = UART1_TX_DMA_REQUEST,                            \
        .dma_rcc = UART1_TX_DMA_RCC,                                \
        .dma_irq = UART1_TX_DMA_IRQ,                                \
    }
#endif /* UART1_DMA_TX_CONFIG */
#endif /* BSP_UART1_TX_USING_DMA */

#if defined(BSP_USING_UART5)
#ifndef UART5_CONFIG
#define UART5_CONFIG                                                \
    {                                                               \
        .name = "uart5",                                            \
        .Instance = UART5,                                          \
        .irq_type = UART5_IRQn,                                     \
    }
#endif /* UART5_CONFIG */
#endif /* BSP_USING_UART5 */

#if defined(BSP_UART5_RX_USING_DMA)
#ifndef UART5_DMA_RX_CONFIG
#define UART5_DMA_RX_CONFIG                                         \
    {                                                               \
        .Instance = UART5_RX_DMA_INSTANCE,                          \
        .request = UART5_RX_DMA_REQUEST,                            \
        .dma_rcc = UART5_RX_DMA_RCC,                                \
        .dma_irq = UART5_RX_DMA_IRQ,                                \
    }
#endif /* UART5_DMA_RX_CONFIG */
#endif /* BSP_UART5_RX_USING_DMA */

#if defined(BSP_UART5_TX_USING_DMA)
#ifndef UART5_DMA_TX_CONFIG
#define UART5_DMA_TX_CONFIG                                         \
    {                                                               \
        .Instance = UART5_TX_DMA_INSTANCE,                          \
        .request = UART5_TX_DMA_REQUEST,                            \
        .dma_rcc = UART5_TX_DMA_RCC,                                \
        .dma_irq = UART5_TX_DMA_IRQ,                                \
    }
#endif /* UART5_DMA_TX_CONFIG */
#endif /* BSP_UART5_TX_USING_DMA */

#if defined(BSP_USING_UART7)
#ifndef UART7_CONFIG
#define UART7_CONFIG                                                \
    {                                                               \
        .name = "uart7",                                            \
        .Instance = UART7,                                          \
        .irq_type = UART7_IRQn,                                     \
    }
#endif /* UART7_CONFIG */
#endif /* BSP_USING_UART7 */

#if defined(BSP_UART7_RX_USING_DMA)
#ifndef UART7_DMA_RX_CONFIG
#define UART7_DMA_RX_CONFIG                                         \
    {                                                               \
        .Instance = UART7_RX_DMA_INSTANCE,                          \
        .request = UART7_RX_DMA_REQUEST,                            \
        .dma_rcc = UART7_RX_DMA_RCC,                                \
        .dma_irq = UART7_RX_DMA_IRQ,                                \
    }
#endif /* UART7_DMA_RX_CONFIG */
#endif /* BSP_UART7_RX_USING_DMA */


#if defined(BSP_UART7_TX_USING_DMA)
#ifndef UART7_DMA_TX_CONFIG
#define UART7_DMA_TX_CONFIG                                         \
    {                                                               \
        .Instance = UART7_TX_DMA_INSTANCE,                          \
        .request = UART7_TX_DMA_REQUEST,                            \
        .dma_rcc = UART7_TX_DMA_RCC,                                \
        .dma_irq = UART7_TX_DMA_IRQ,                                \
    }
#endif /* UART7_DMA_TX_CONFIG */
#endif /* BSP_UART7_TX_USING_DMA */


#if defined(BSP_USING_UART10)
#ifndef UART10_CONFIG
#define UART10_CONFIG                                                \
    {                                                               \
        .name = "uart10",                                            \
        .Instance = UART10,                                          \
        .irq_type = UART10_IRQn,                                     \
    }
#endif /* UART10_CONFIG */
#endif /* BSP_USING_UART10 */

#if defined(BSP_UART10_RX_USING_DMA)
#ifndef UART10_DMA_RX_CONFIG
#define UART10_DMA_RX_CONFIG                                         \
    {                                                               \
        .Instance = UART10_RX_DMA_INSTANCE,                          \
        .request = UART10_RX_DMA_REQUEST,                            \
        .dma_rcc = UART10_RX_DMA_RCC,                                \
        .dma_irq = UART10_RX_DMA_IRQ,                                \
    }
#endif /* UART10_DMA_RX_CONFIG */
#endif /* BSP_UART10_RX_USING_DMA */


#if defined(BSP_USING_LPUART1)
#ifndef LPUART1_CONFIG
#define LPUART1_CONFIG                                              \
    {                                                               \
        .name = "hlpuart1",                                          \
        .Instance = LPUART1,                                        \
        .irq_type = LPUART1_IRQn,                                   \
    }
#endif /* LPUART1_CONFIG */
#endif /* BSP_USING_LPUART1 */

#ifdef __cplusplus
}
#endif

#endif
