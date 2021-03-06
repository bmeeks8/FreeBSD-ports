--- base/process/launch.cc.orig	2019-12-12 12:38:59 UTC
+++ base/process/launch.cc
@@ -15,7 +15,7 @@ LaunchOptions::~LaunchOptions() = default;
 
 LaunchOptions LaunchOptionsForTest() {
   LaunchOptions options;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // To prevent accidental privilege sharing to an untrusted child, processes
   // are started with PR_SET_NO_NEW_PRIVS. Do not set that here, since this
   // new child will be used for testing only.
