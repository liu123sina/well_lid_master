/* config.h -- Autogenerated! Do not edit. */

#ifndef __INCLUDE_NUTTX_CONFIG_H
#define __INCLUDE_NUTTX_CONFIG_H

/* Architecture-specific options *************************/

#define CONFIG_HOST_LINUX 1
#define CONFIG_APPS_DIR "../apps"
#define CONFIG_BUILD_FLAT 1
#define CONFIG_INTELHEX_BINARY 1
#define CONFIG_RAW_BINARY 1
#define CONFIG_DEBUG_ALERT 1
#define CONFIG_DEBUG_FEATURES 1
#define CONFIG_ARCH_HAVE_STACKCHECK 1
#define CONFIG_STACK_COLORATION 1
#define CONFIG_ARCH_HAVE_HEAPCHECK 1
#define CONFIG_HEAP_COLORATION 1
#define CONFIG_DEBUG_SYMBOLS 1
#define CONFIG_ARCH_HAVE_CUSTOMOPT 1
#define CONFIG_DEBUG_NOOPT 1
#define CONFIG_ARCH_ARM 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_CHIP_STM32L4 1
#define CONFIG_ARCH_CORTEXM4 1
#define CONFIG_ARCH_FAMILY "armv7-m"
#define CONFIG_ARCH_CHIP "stm32l4"
#define CONFIG_ARCH_HAVE_CMNVECTOR 1
#define CONFIG_ARMV7M_CMNVECTOR 1
#define CONFIG_ARCH_HAVE_FPU 1
#define CONFIG_ARM_HAVE_MPU_UNIFIED 1
#define CONFIG_ARMV7M_TOOLCHAIN_CODESOURCERYL 1
#define CONFIG_ARMV7M_HAVE_STACKCHECK 1
#define CONFIG_SERIAL_TERMIOS 1
#define CONFIG_ARCH_CHIP_STM32L476RG 1
#define CONFIG_STM32L4_STM32L4X6 1
#define CONFIG_STM32L4_STM32L476XX 1
#define CONFIG_STM32L4_FLASH_OVERRIDE_DEFAULT 1
#define CONFIG_STM32L4_FLASH_CONFIG_G 1
#define CONFIG_STM32L4_IO_CONFIG_R 1
#define CONFIG_STM32L4_SRAM2_HEAP 1
#define CONFIG_STM32L4_SRAM2_INIT 1
#define CONFIG_STM32L4_HAVE_ADC2 1
#define CONFIG_STM32L4_HAVE_ADC3 1
#define CONFIG_STM32L4_HAVE_COMP 1
#define CONFIG_STM32L4_HAVE_DAC2 1
#define CONFIG_STM32L4_HAVE_FSMC 1
#define CONFIG_STM32L4_HAVE_LCD 1
#define CONFIG_STM32L4_HAVE_LPTIM1 1
#define CONFIG_STM32L4_HAVE_LPTIM2 1
#define CONFIG_STM32L4_HAVE_OTGFS 1
#define CONFIG_STM32L4_HAVE_SAI1 1
#define CONFIG_STM32L4_HAVE_SAI2 1
#define CONFIG_STM32L4_HAVE_SDMMC1 1
#define CONFIG_STM32L4_HAVE_TIM3 1
#define CONFIG_STM32L4_HAVE_TIM4 1
#define CONFIG_STM32L4_HAVE_TIM5 1
#define CONFIG_STM32L4_HAVE_TIM7 1
#define CONFIG_STM32L4_HAVE_TIM8 1
#define CONFIG_STM32L4_HAVE_TIM17 1
#define CONFIG_STM32L4_ADC 1
#define CONFIG_STM32L4_DMA 1
#define CONFIG_STM32L4_I2C 1
#define CONFIG_STM32L4_USART 1
#define CONFIG_STM32L4_DMA1 1
#define CONFIG_STM32L4_DMA2 1
#define CONFIG_STM32L4_ADC1 1
#define CONFIG_STM32L4_RNG 1
#define CONFIG_STM32L4_PWR 1
#define CONFIG_STM32L4_TIM3 1
#define CONFIG_STM32L4_USART2 1
#define CONFIG_STM32L4_USART3 1
#define CONFIG_STM32L4_UART4 1
#define CONFIG_STM32L4_UART5 1
#define CONFIG_STM32L4_I2C1 1
#define CONFIG_STM32L4_SYSCFG 1
#define CONFIG_STM32L4_FIREWALL 1
#define CONFIG_STM32L4_TIM1 1
#define CONFIG_STM32L4_USART1 1
#define CONFIG_STM32L4_IWDG 1
#define CONFIG_STM32L4_FLASH_PREFETCH 1
#define CONFIG_STM32L4_DISABLE_IDLE_SLEEP_DURING_DEBUG 1
#define CONFIG_STM32L4_RTC_LSECLOCK 1
#define CONFIG_STM32L4_SAI1PLL 1
#define CONFIG_STM32L4_TIM1_PWM 1
#define CONFIG_STM32L4_TIM1_MODE 0
#define CONFIG_STM32L4_TIM1_CHANNEL 4
#define CONFIG_STM32L4_TIM1_CHMODE 0
#define CONFIG_STM32L4_TIM3_PWM 1
#define CONFIG_STM32L4_TIM3_MODE 0
#define CONFIG_STM32L4_TIM3_CHANNEL 2
#define CONFIG_STM32L4_TIM3_CHMODE 0
#define CONFIG_STM32L4_ADC1_DMA 1
#define CONFIG_STM32L4_HAVE_USART1 1
#define CONFIG_STM32L4_HAVE_USART2 1
#define CONFIG_STM32L4_HAVE_USART3 1
#define CONFIG_STM32L4_HAVE_UART4 1
#define CONFIG_STM32L4_HAVE_UART5 1
#define CONFIG_STM32L4_I2CTIMEOSEC 0
#define CONFIG_STM32L4_I2CTIMEOMS 500
#define CONFIG_STM32L4_I2CTIMEOTICKS 500
#define CONFIG_ARCH_TOOLCHAIN_GNU 1
#define CONFIG_ARCH_DMA 1
#define CONFIG_ARCH_HAVE_IRQPRIO 1
#define CONFIG_ARCH_HAVE_VFORK 1
#define CONFIG_ARCH_HAVE_MPU 1
#define CONFIG_ARCH_HAVE_RESET 1
#define CONFIG_ARCH_STACKDUMP 1
#define CONFIG_ARCH_HAVE_RAMVECTORS 1
#define CONFIG_BOARD_LOOPSPERMSEC 8499
#define CONFIG_ARCH_HAVE_INTERRUPTSTACK 1
#define CONFIG_ARCH_INTERRUPTSTACK 2048
#define CONFIG_ARCH_HAVE_HIPRI_INTERRUPT 1
#define CONFIG_BOOT_RUNFROMFLASH 1
#define CONFIG_RAM_START 0x20000000
#define CONFIG_RAM_SIZE 98304
#define CONFIG_ARCH_BOARD_NUCLEO_L476RG 1
#define CONFIG_ARCH_BOARD "nucleo-l476rg"
#define CONFIG_ARCH_HAVE_LEDS 1
#define CONFIG_ARCH_HAVE_BUTTONS 1
#define CONFIG_ARCH_HAVE_IRQBUTTONS 1
#define CONFIG_STM32L476_WDG 1
#define CONFIG_STM32L476_IWDG 1
#define CONFIG_STM32L476_IWDG_TIMEOUT 3000
#define CONFIG_STM32L476_WDG_THREAD 1
#define CONFIG_STM32L476_WDG_THREAD_NAME "wdog"
#define CONFIG_STM32L476_WDG_THREAD_INTERVAL 1000
#define CONFIG_STM32L476_WDG_THREAD_PRIORITY 200
#define CONFIG_STM32L476_WDG_THREAD_STACKSIZE 1024
#define CONFIG_LIB_BOARDCTL 1
#define CONFIG_BOARDCTL_APP_SYMTAB 1
#define CONFIG_BOARDCTL_IOCTL 1
#define CONFIG_DISABLE_OS_API 1
#define CONFIG_ARCH_HAVE_TICKLESS 1
#define CONFIG_USEC_PER_TICK 10000
#define CONFIG_START_YEAR 2017
#define CONFIG_START_MONTH 1
#define CONFIG_START_DAY 1
#define CONFIG_MAX_WDOGPARMS 2
#define CONFIG_PREALLOC_WDOGS 8
#define CONFIG_WDOG_INTRESERVE 1
#define CONFIG_PREALLOC_TIMERS 4
#define CONFIG_INIT_ENTRYPOINT 1
#define CONFIG_USER_ENTRYPOINT nsh_main
#define CONFIG_RR_INTERVAL 200
#define CONFIG_TASK_NAME_SIZE 64
#define CONFIG_MAX_TASKS 32
#define CONFIG_SCHED_WAITPID 1
#define CONFIG_PTHREAD_MUTEX_ROBUST 1
#define CONFIG_NPTHREAD_KEYS 6
#define CONFIG_DEV_CONSOLE 1
#define CONFIG_SDCLONE_DISABLE 1
#define CONFIG_NFILE_DESCRIPTORS 16
#define CONFIG_NFILE_STREAMS 16
#define CONFIG_NAME_MAX 64
#define CONFIG_SIG_SIGUSR1 1
#define CONFIG_SIG_SIGUSR2 2
#define CONFIG_SIG_SIGALARM 3
#define CONFIG_SIG_SIGCONDTIMEDOUT 16
#define CONFIG_PREALLOC_MQ_MSGS 4
#define CONFIG_MQ_MAXMSGSIZE 32
#define CONFIG_IDLETHREAD_STACKSIZE 1024
#define CONFIG_USERMAIN_STACKSIZE 2048
#define CONFIG_PTHREAD_STACK_MIN 256
#define CONFIG_PTHREAD_STACK_DEFAULT 2048
#define CONFIG_DEV_NULL 1
#define CONFIG_ARCH_HAVE_RNG 1
#define CONFIG_DEV_RANDOM 1
#define CONFIG_ARCH_HAVE_PWM_PULSECOUNT 1
#define CONFIG_PWM 1
#define CONFIG_ARCH_HAVE_I2CRESET 1
#define CONFIG_I2C 1
#define CONFIG_I2C_RESET 1
#define CONFIG_I2C_DRIVER 1
#define CONFIG_ARCH_HAVE_SPI_BITORDER 1
#define CONFIG_SPI 1
#define CONFIG_SPI_EXCHANGE 1
#define CONFIG_RTC 1
#define CONFIG_RTC_DATETIME 1
#define CONFIG_RTC_ALARM 1
#define CONFIG_RTC_NALARMS 2
#define CONFIG_RTC_DRIVER 1
#define CONFIG_RTC_IOCTL 1
#define CONFIG_WATCHDOG 1
#define CONFIG_WATCHDOG_DEVPATH "/dev/watchdog0"
#define CONFIG_ANALOG 1
#define CONFIG_ADC 1
#define CONFIG_ADC_FIFOSIZE 8
#define CONFIG_ADC_NPOLLWAITERS 2
#define CONFIG_COMP 1
#define CONFIG_DEV_GPIO 1
#define CONFIG_MTD 1
#define CONFIG_MTD_AT24XX 1
#define CONFIG_AT24XX_SIZE 512
#define CONFIG_AT24XX_ADDR 0x50
#define CONFIG_AT24XX_FREQUENCY 100000
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_UART4_SERIALDRIVER 1
#define CONFIG_UART5_SERIALDRIVER 1
#define CONFIG_USART1_SERIALDRIVER 1
#define CONFIG_USART2_SERIALDRIVER 1
#define CONFIG_USART3_SERIALDRIVER 1
#define CONFIG_MCU_SERIAL 1
#define CONFIG_STANDARD_SERIAL 1
#define CONFIG_SERIAL_NPOLLWAITERS 2
#define CONFIG_ARCH_HAVE_SERIAL_TERMIOS 1
#define CONFIG_USART1_SERIAL_CONSOLE 1
#define CONFIG_USART1_RXBUFSIZE 256
#define CONFIG_USART1_TXBUFSIZE 256
#define CONFIG_USART1_BAUD 19200
#define CONFIG_USART1_BITS 8
#define CONFIG_USART1_PARITY 0
#define CONFIG_USART1_2STOP 0
#define CONFIG_USART2_RXBUFSIZE 256
#define CONFIG_USART2_TXBUFSIZE 256
#define CONFIG_USART2_BAUD 19200
#define CONFIG_USART2_BITS 8
#define CONFIG_USART2_PARITY 0
#define CONFIG_USART2_2STOP 0
#define CONFIG_USART3_RXBUFSIZE 256
#define CONFIG_USART3_TXBUFSIZE 256
#define CONFIG_USART3_BAUD 9600
#define CONFIG_USART3_BITS 8
#define CONFIG_USART3_PARITY 0
#define CONFIG_USART3_2STOP 0
#define CONFIG_UART4_RXBUFSIZE 256
#define CONFIG_UART4_TXBUFSIZE 256
#define CONFIG_UART4_BAUD 9600
#define CONFIG_UART4_BITS 8
#define CONFIG_UART4_PARITY 0
#define CONFIG_UART4_2STOP 0
#define CONFIG_UART5_RXBUFSIZE 256
#define CONFIG_UART5_TXBUFSIZE 256
#define CONFIG_UART5_BAUD 115200
#define CONFIG_UART5_BITS 8
#define CONFIG_UART5_PARITY 0
#define CONFIG_UART5_2STOP 0
#define CONFIG_SYSLOG_WRITE 1
#define CONFIG_SYSLOG_SERIAL_CONSOLE 1
#define CONFIG_SYSLOG_CONSOLE 1
#define CONFIG_FS_READABLE 1
#define CONFIG_FS_WRITABLE 1
#define CONFIG_FS_MQUEUE_MPATH "/var/mqueue"
#define CONFIG_FS_FAT 1
#define CONFIG_FS_ROMFS 1
#define CONFIG_FS_PROCFS 1
#define CONFIG_MM_REGIONS 2
#define CONFIG_BUILTIN 1
#define CONFIG_STDIO_BUFFER_SIZE 64
#define CONFIG_STDIO_LINEBUFFER 1
#define CONFIG_NUNGET_CHARS 2
#define CONFIG_LIBC_FLOATINGPOINT 1
#define CONFIG_LIBC_LONG_LONG 1
#define CONFIG_EOL_IS_EITHER_CRLF 1
#define CONFIG_LIBM 1
#define CONFIG_ARCH_LOWPUTC 1
#define CONFIG_LIB_RAND_ORDER 1
#define CONFIG_LIB_HOMEDIR "/"
#define CONFIG_LIBC_TMPDIR "/tmp"
#define CONFIG_LIBC_MAX_TMPFILE 32
#define CONFIG_LIBC_EXECFUNCS 1
#define CONFIG_EXECFUNCS_HAVE_SYMTAB 1
#define CONFIG_EXECFUNCS_SYMTAB g_symtab
#define CONFIG_EXECFUNCS_NSYMBOLS 0
#define CONFIG_POSIX_SPAWN_PROXY_STACKSIZE 1024
#define CONFIG_TASK_SPAWN_DEFAULT_STACKSIZE 2048
#define CONFIG_ARCH_HAVE_TLS 1
#define CONFIG_LIB_SENDFILE_BUFSIZE 512
#define CONFIG_HAVE_CXX 1
#define CONFIG_BUILTIN_PROXY_STACKSIZE 1024
#define CONFIG_EXAMPLES_485_PRIORITY 100
#define CONFIG_EXAMPLES_485_STACKSIZE 2048
#define CONFIG_EXAMPLES_485_DEVPATH "/dev/ttyS4"
#define CONFIG_EXAMPLES_ADC_DEVPATH "/dev/adc0"
#define CONFIG_EXAMPLES_ADC_GROUPSIZE 3
#define CONFIG_EXAMPLES_ADC_SWTRIG 1
#define CONFIG_EXAMPLES_BLUETOOTH_PRIORITY 100
#define CONFIG_EXAMPLES_BLUETOOTH_STACKSIZE 2048
#define CONFIG_EXAMPLES_BLUETOOTH_DEVPATH "/dev/ttyS3"
#define CONFIG_EXAMPLES_GPRS_PRIORITY 100
#define CONFIG_EXAMPLES_GPRS_STACKSIZE 4096
#define CONFIG_EXAMPLES_GPRS_DEVPATH "/dev/ttyS1"
#define CONFIG_EXAMPLES_LID_MASTER 1
#define CONFIG_EXAMPLES_LID_MASTER_PRIORITY 100
#define CONFIG_EXAMPLES_LID_MASTER_STACKSIZE 2048
#define CONFIG_EXAMPLES_LID_MASTER_MONITOR 1
#define CONFIG_EXAMPLES_MONITOR_PRIORITY 100
#define CONFIG_EXAMPLES_MONITOR_STACKSIZE 2048
#define CONFIG_EXAMPLES_LID_MASTER_485 1
#define CONFIG_EXAMPLES_MASTER_GPRS 1
#define CONFIG_EXAMPLES_MASTER_BLUETOOTH 1
#define CONFIG_EXAMPLES_LID_MOTOR 1
#define CONFIG_EXAMPLES_MOTOR_PRIORITY 100
#define CONFIG_EXAMPLES_MOTOR_STACKSIZE 2048
#define CONFIG_EXAMPLES_SENSORA_DEVPATH "/dev/gpin0"
#define CONFIG_EXAMPLES_SENSORB_DEVPATH "/dev/gpin1"
#define CONFIG_EXAMPLES_LIGHT315_DEVPATH "/dev/gpin2"
#define CONFIG_LID_EXAMPLES_PWM 1
#define CONFIG_EXAMPLES_PWM_DEVPATH "/dev/pwm2"
#define CONFIG_EXAMPLES_PWM_FREQUENCY 3000
#define CONFIG_EXAMPLES_PWM_DUTYPCT 15
#define CONFIG_EXAMPLES_BUZZPWM 1
#define CONFIG_EXAMPLES_BUZZPWM_DEVPATH "/dev/pwm0"
#define CONFIG_EXAMPLES_BUZZON_PWM_FREQUENCY 200
#define CONFIG_EXAMPLES_BUZZON_PWM_DUTYPCT 99
#define CONFIG_EXAMPLES_BUZZOFF_PWM_FREQUENCY 4
#define CONFIG_EXAMPLES_BUZZOFF_PWM_DUTYPCT 10
#define CONFIG_EXAMPLES_LID_MASTER_WAKEUP_315 1
#define CONFIG_EXAMPLES_WKUP315_PRIORITY 100
#define CONFIG_EXAMPLES_WKUP315_STACKSIZE 2048
#define CONFIG_EXAMPLES_WKUP315_DEVPATH "/dev/gpin4"
#define CONFIG_EXAMPLES_LID_MASTER_ZD801S 1
#define CONFIG_EXAMPLES_ZD801S_PRIORITY 100
#define CONFIG_EXAMPLES_ZD801S_STACKSIZE 2048
#define CONFIG_EXAMPLES_ZD801S_DEVPATH "/dev/gpint5"
#define CONFIG_EXAMPLES_LID_MASTER_CLOSELOCK_315 1
#define CONFIG_EXAMPLES_CLOSE315_PRIORITY 100
#define CONFIG_EXAMPLES_CLOSE315_STACKSIZE 2048
#define CONFIG_EXAMPLES_CLOSE315_DEVPATH "/dev/gpin3"
#define CONFIG_EXAMPLES_LID_MASTER_ADC 1
#define CONFIG_EXAMPLES_ADC_PRIORITY 100
#define CONFIG_EXAMPLES_ADC_STACKSIZE 2048
#define CONFIG_EXAMPLES_LID_MASTER_FLASH 1
#define CONFIG_EXAMPLES_FLASH_PRIORITY 100
#define CONFIG_EXAMPLES_FLASH_STACKSIZE 4096
#define CONFIG_EXAMPLES_FLASH_DEVPATH "/dev/mtdblock0"
#define CONFIG_EXAMPLES_MASTER_WDT 1
#define CONFIG_EXAMPLES_WDT_PRIORITY 100
#define CONFIG_EXAMPLES_WDT_STACKSIZE 2048
#define CONFIG_EXAMPLES_NSH 1
#define CONFIG_EXAMPLES_NSH_CXXINITIALIZE 1
#define CONFIG_NSH_LIBRARY 1
#define CONFIG_NSH_READLINE 1
#define CONFIG_NSH_LINELEN 64
#define CONFIG_NSH_CMDPARMS 1
#define CONFIG_NSH_MAXARGUMENTS 6
#define CONFIG_NSH_NESTDEPTH 3
#define CONFIG_NSH_BUILTIN_APPS 1
#define CONFIG_NSH_MMCSDMINOR 0
#define CONFIG_NSH_CMDOPT_DF_H 1
#define CONFIG_NSH_CMDOPT_DD_STATS 1
#define CONFIG_NSH_CODECS_BUFSIZE 128
#define CONFIG_NSH_CMDOPT_HEXDUMP 1
#define CONFIG_NSH_PROC_MOUNTPOINT "/proc"
#define CONFIG_NSH_FILEIOSIZE 512
#define CONFIG_NSH_ROMFSETC 1
#define CONFIG_NSH_ROMFSMOUNTPT "/etc"
#define CONFIG_NSH_INITSCRIPT "init.d/rcS"
#define CONFIG_NSH_ROMFSDEVNO 0
#define CONFIG_NSH_ROMFSSECTSIZE 64
#define CONFIG_NSH_ARCHROMFS 1
#define CONFIG_NSH_FATDEVNO 1
#define CONFIG_NSH_FATSECTSIZE 512
#define CONFIG_NSH_FATNSECTORS 1024
#define CONFIG_NSH_FATMOUNTPT "/tmp"
#define CONFIG_NSH_CONSOLE 1
#define CONFIG_NSH_ARCHINIT 1
#define CONFIG_HAVE_CXXINITIALIZE 1
#define CONFIG_READLINE_HAVE_EXTMATCH 1
#define CONFIG_SYSTEM_READLINE 1
#define CONFIG_READLINE_ECHO 1
#define CONFIG_READLINE_TABCOMPLETION 1
#define CONFIG_READLINE_MAX_BUILTINS 64
#define CONFIG_READLINE_MAX_EXTCMDS 64
#define CONFIG_READLINE_CMD_HISTORY 1
#define CONFIG_READLINE_CMD_HISTORY_LINELEN 80
#define CONFIG_READLINE_CMD_HISTORY_LEN 16
#define CONFIG_SYSTEM_SYSTEM 1
#define CONFIG_SYSTEM_SYSTEM_STACKSIZE 2048
#define CONFIG_SYSTEM_SYSTEM_PRIORITY 100

/* Sanity Checks *****************************************/

/* If this is an NXFLAT, external build, then make sure that
 * NXFLAT support is enabled in the base code.
 */

#if defined(__NXFLAT__) && !defined(CONFIG_NXFLAT)
# error "NXFLAT support not enabled in this configuration"
#endif

/* NXFLAT requires PIC support in the TCBs. */

#if defined(CONFIG_NXFLAT)
#  undef  CONFIG_PIC
#  define CONFIG_PIC 1
#endif

/* Binary format support is disabled if no binary formats are
 * configured (at present, NXFLAT is the only supported binary.
 * format).
 */

#if !defined(CONFIG_NXFLAT) && !defined(CONFIG_ELF) && !defined(CONFIG_BUILTIN)
#  undef CONFIG_BINFMT_DISABLE
#  define CONFIG_BINFMT_DISABLE 1
#endif

/* The correct way to disable RR scheduling is to set the
 * timeslice to zero.
 */

#ifndef CONFIG_RR_INTERVAL
#  define CONFIG_RR_INTERVAL 0
#endif

/* The correct way to disable filesystem support is to set the number of
 * file descriptors to zero.
 */

#ifndef CONFIG_NFILE_DESCRIPTORS
#  define CONFIG_NFILE_DESCRIPTORS 0
#endif

/* If no file descriptors are configured, then make certain no streams
 * are configured either.
 */

#if CONFIG_NFILE_DESCRIPTORS == 0
#  undef  CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 0
#endif

/* The correct way to disable stream support is to set the number of
 * streamd to zero.
 */

#ifndef CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 0
#endif

/* If a console is selected, then make sure that there are resources for
 * three file descriptors and, if any streams are selected, also for three
 * file streams.
 *
 * CONFIG_DEV_CONSOLE means that a builtin console device exists at /dev/console
 * and can be opened during boot-up.  Other consoles, such as USB consoles, may
 * not exist at boot-upand have to be handled in a different way.  Three file
 * descriptors and three file streams are still needed.
 */

#if defined(CONFIG_DEV_CONSOLE) || defined(CONFIG_CDCACM_CONSOLE) || \
    defined(CONFIG_PL2303_CONSOLE)
# if CONFIG_NFILE_DESCRIPTORS < 3
#   undef CONFIG_NFILE_DESCRIPTORS
#   define CONFIG_NFILE_DESCRIPTORS 3
# endif

# if CONFIG_NFILE_STREAMS > 0 && CONFIG_NFILE_STREAMS < 3
#  undef CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 3
# endif

/* If no console is selected, then disable all builtin console devices */

#else
#  undef CONFIG_DEV_LOWCONSOLE
#  undef CONFIG_RAMLOG_CONSOLE
#endif

/* If no file streams are configured, then make certain that buffered I/O
 * support is disabled
 */

#if CONFIG_NFILE_STREAMS == 0
#  undef  CONFIG_STDIO_BUFFER_SIZE
#  undef  CONFIG_STDIO_LINEBUFFER
#  undef  CONFIG_STDIO_DISABLE_BUFFERING
#  define CONFIG_STDIO_DISABLE_BUFFERING 1
#endif

/* If priority inheritance is disabled, then do not allocate any
 * associated resources.
 */

#if !defined(CONFIG_PRIORITY_INHERITANCE) || !defined(CONFIG_SEM_PREALLOCHOLDERS)
#  undef CONFIG_SEM_PREALLOCHOLDERS
#  define CONFIG_SEM_PREALLOCHOLDERS 0
#endif

#if !defined(CONFIG_PRIORITY_INHERITANCE) || !defined(CONFIG_SEM_NNESTPRIO)
#  undef  CONFIG_SEM_NNESTPRIO
#  define CONFIG_SEM_NNESTPRIO 0
#endif

/* If the end of RAM is not specified then it is assumed to be the beginning
 * of RAM plus the RAM size.
 */

#ifndef CONFIG_RAM_END
#  define CONFIG_RAM_END (CONFIG_RAM_START+CONFIG_RAM_SIZE)
#endif

#ifndef CONFIG_RAM_VEND
#  define CONFIG_RAM_VEND (CONFIG_RAM_VSTART+CONFIG_RAM_SIZE)
#endif

/* If the end of FLASH is not specified then it is assumed to be the beginning
 * of FLASH plus the FLASH size.
 */

#ifndef CONFIG_FLASH_END
#  define CONFIG_FLASH_END (CONFIG_FLASH_START+CONFIG_FLASH_SIZE)
#endif

/* If the maximum message size is zero, then we assume that message queues
 * support should be disabled
 */

#if !defined(CONFIG_MQ_MAXMSGSIZE) || defined(CONFIG_DISABLE_MQUEUE)
#  undef CONFIG_MQ_MAXMSGSIZE
#  define CONFIG_MQ_MAXMSGSIZE 0
#endif

#if CONFIG_MQ_MAXMSGSIZE <= 0 && !defined(CONFIG_DISABLE_MQUEUE)
#  define CONFIG_DISABLE_MQUEUE 1
#endif

/* The correct way to disable socket support is to set the number of
 * socket descriptors to zero.
 */

#ifndef CONFIG_NSOCKET_DESCRIPTORS
#  define CONFIG_NSOCKET_DESCRIPTORS 0
#endif

/* There can be no network support with no socket descriptors */

#if CONFIG_NSOCKET_DESCRIPTORS <= 0
#  undef CONFIG_NET
#endif

/* Conversely, if there is no network support, there is no need for
 * socket descriptors
 */

#ifndef CONFIG_NET
#  undef  CONFIG_NSOCKET_DESCRIPTORS
#  define CONFIG_NSOCKET_DESCRIPTORS 0
#endif

#endif /* __INCLUDE_NUTTX_CONFIG_H */
