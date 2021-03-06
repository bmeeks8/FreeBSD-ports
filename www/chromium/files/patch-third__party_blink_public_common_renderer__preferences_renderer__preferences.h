--- third_party/blink/public/common/renderer_preferences/renderer_preferences.h.orig	2021-01-19 11:50:37 UTC
+++ third_party/blink/public/common/renderer_preferences/renderer_preferences.h
@@ -49,7 +49,7 @@ struct BLINK_COMMON_EXPORT RendererPreferences {
   bool webrtc_allow_legacy_tls_protocols{false};
   UserAgentOverride user_agent_override;
   std::string accept_languages;
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   std::string system_font_family_name;
 #endif
 #if defined(OS_WIN)
