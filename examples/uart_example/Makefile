# name of your application
APPLICATION = uart_example

# If no BOARD is found in the environment, use this default:
BOARD ?= nucleo-l476rg

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

FEATURES_REQUIRED += periph_uart
FEATURES_OPTIONAL += periph_lpuart  # STM32 L0 and L4 provides lpuart support
FEATURES_OPTIONAL += periph_uart_collision
FEATURES_OPTIONAL += periph_uart_modecfg
FEATURES_OPTIONAL += periph_uart_rxstart_irq

include $(RIOTBASE)/Makefile.include
