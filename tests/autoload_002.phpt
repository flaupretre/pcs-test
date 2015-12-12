--TEST--
Combine PCS and external autoloader
--EXTENSIONS--
pcs
--INI--
ptest.load_code1=1
--SKIPIF--
<?php if (!extension_loaded("pcs")) print "skip"; ?>
--FILE--
<?php
function loader1($sym)
{
echo("loader1: Searching for $sym\n");
}

//----

function __autoload($sym)
{
echo("__autoload: Searching for $sym\n");
}

//----

var_dump(class_exists('undefined1')); // PCS + __autoload

spl_autoload_register('loader1');

var_dump(class_exists('undefined2')); // PCS + loader1

$obj = new PCS_Test\Dummy1(); // loader1 must not be called here
$obj->hello();

var_dump(class_exists('undefined3')); // PCS + loader1

spl_autoload_unregister('loader1');

var_dump(class_exists('undefined4')); // PCS only (spl does not restore __autoload())

?>
===DONE===
--EXPECT--
Loaded code1 set
__autoload: Searching for undefined1
bool(false)
loader1: Searching for undefined2
bool(false)
Hello World !
loader1: Searching for undefined3
bool(false)
bool(false)
===DONE===
