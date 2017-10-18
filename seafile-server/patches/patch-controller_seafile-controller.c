$NetBSD$

Use correct proc path on SunOS

--- controller/seafile-controller.c.orig	2017-09-18 08:05:24.000000000 +0000
+++ controller/seafile-controller.c
@@ -244,7 +244,11 @@ static void
 init_seafile_path ()
 {
     GError *error = NULL;
+#if defined(__sun)
+    char *binary = g_file_read_link ("/proc/self/path/a.out", &error);
+#else
     char *binary = g_file_read_link ("/proc/self/exe", &error);
+#endif
     char *tmp = NULL;
     if (error != NULL) {
         seaf_warning ("failed to readlink: %s\n", error->message);
