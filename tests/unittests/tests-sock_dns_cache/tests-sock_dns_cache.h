/*
 * Copyright (C) 2022 ML!PA Consulting GmbH
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @addtogroup  unittests
 * @{
 *
 * @file
 * @brief       Unittests for the ``sock_dns_cache`` module
 *
 * @author      Benjamin Valentin <benjamin.valentin@ml-pa.com>
 */
#ifndef TESTS_SOCK_DNS_CACHE_H
#define TESTS_SOCK_DNS_CACHE_H

#include "embUnit.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   The entry point of this test suite.
 */
void tests_sock_dns_cache(void);

/**
 * @brief   Generates tests for sock_dns_cache
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_sock_dns_cache_tests(void);

#ifdef __cplusplus
}
#endif

#endif /* TESTS_SOCK_DNS_CACHE_H */
/** @} */
