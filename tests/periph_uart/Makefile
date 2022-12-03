include ../Makefile.tests_common

FEATURES_REQUIRED += periph_uart

USEMODULE += shell
USEMODULE += xtimer
USEMODULE += periph_uart

# avoid running Kconfig by default
SHOULD_RUN_KCONFIG ?=

include $(RIOTBASE)/Makefile.include
