--- build/FreeBSD.gcc.inc.orig	2020-07-10 13:18:01 UTC
+++ build/FreeBSD.gcc.inc
@@ -26,7 +26,7 @@ WARNING_SUPPRESS = -Wno-parentheses
 
 CPLUS = g++ 
 CONLY = gcc
-LIB_LINK_FLAGS = -shared
+LIB_LINK_FLAGS = -shared -Wl,-soname=$(BUILDING_LIBRARY)
 LIBS = -lpthread 
 C_FLAGS = $(CPLUS_FLAGS)
 
@@ -58,6 +58,21 @@ endif 
 ifeq (intel64,$(arch))
     CPLUS_FLAGS += -m64
     LIB_LINK_FLAGS += -m64
+endif 
+
+ifeq (powerpc64,$(arch))
+    CPLUS_FLAGS += -m64
+    LIB_LINK_FLAGS += -m64
+endif 
+
+ifeq (powerpc64le,$(arch))
+    CPLUS_FLAGS += -m64
+    LIB_LINK_FLAGS += -m64
+endif 
+
+ifeq (powerpc,$(arch))
+    CPLUS_FLAGS += -m32
+    LIB_LINK_FLAGS += -m32
 endif 
 
 ifeq (ia32,$(arch))
