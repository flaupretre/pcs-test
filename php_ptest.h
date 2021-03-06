/*
  +----------------------------------------------------------------------+
  | PCS test extension <http://ptest.tekwire.net>                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 2015 The PHP Group                                     |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Francois Laupretre <francois@tekwire.net>                    |
  +----------------------------------------------------------------------+
*/

#ifndef __PHP_PTEST_H
#define __PHP_PTEST_H

/*============================================================================*/

#define PHP_PTEST_VERSION "2.0.0" /* The extension version */

#define PHP_PTEST_EXTNAME "ptest"

extern zend_module_entry ptest_module_entry;

#define phpext_ptest_ptr &ptest_module_entry

/*============================================================================*/
#endif /* __PHP_PTEST_H */
