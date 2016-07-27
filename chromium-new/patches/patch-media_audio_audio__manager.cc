$NetBSD$

--- media/audio/audio_manager.cc.orig	2016-06-24 01:02:23.000000000 +0000
+++ media/audio/audio_manager.cc
@@ -193,7 +193,7 @@ class AudioManagerHelper : public base::
   }
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD) || defined(OS_NETBSD)
   void set_app_name(const std::string& app_name) {
     app_name_ = app_name;
   }
@@ -243,7 +243,7 @@ class AudioManagerHelper : public base::
   scoped_ptr<base::win::ScopedCOMInitializer> com_initializer_for_testing_;
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD) || defined(OS_NETBSD)
   std::string app_name_;
 #endif
 
@@ -321,7 +321,7 @@ void AudioManager::EnableCrashKeyLogging
   g_helper.Pointer()->enable_crash_key_logging();
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD) || defined(OS_NETBSD)
 // static
 void AudioManager::SetGlobalAppName(const std::string& app_name) {
   g_helper.Pointer()->set_app_name(app_name);