
cmake_minimum_required(VERSION 2.6.3)

project(Plugin)

include(BroPlugin)

bro_plugin_begin(Bro approxidate)
bro_plugin_cc(src/Plugin.cc)
bro_plugin_cc(src/approxidate.c)
bro_plugin_bif(src/functions.bif)
bro_plugin_end()
