$NetBSD$

Avoid "sun" definition, breaks on SunOS

--- evhtp.c.orig	2015-11-26 22:03:52.000000000 +0000
+++ evhtp.c
@@ -3247,7 +3247,7 @@ evhtp_bind_sockaddr(evhtp_t * htp, struc
 int
 evhtp_bind_socket(evhtp_t * htp, const char * baddr, uint16_t port, int backlog) {
 #ifndef NO_SYS_UN
-    struct sockaddr_un  sun;
+    struct sockaddr_un  sockun;
 #endif
     struct sockaddr_in6 sin6;
     struct sockaddr_in  sin;
@@ -3270,18 +3270,18 @@ evhtp_bind_socket(evhtp_t * htp, const c
 #ifndef NO_SYS_UN
         baddr += 5;
 
-        if (strlen(baddr) >= sizeof(sun.sun_path)) {
+        if (strlen(baddr) >= sizeof(sockun.sun_path)) {
             return -1;
         }
 
-        memset(&sun, 0, sizeof(sun));
+        memset(&sockun, 0, sizeof(sockun));
 
         sin_len        = sizeof(struct sockaddr_un);
-        sun.sun_family = AF_UNIX;
+        sockun.sun_family = AF_UNIX;
 
-        strncpy(sun.sun_path, baddr, strlen(baddr));
+        strncpy(sockun.sun_path, baddr, strlen(baddr));
 
-        sa = (struct sockaddr *)&sun;
+        sa = (struct sockaddr *)&sockun;
 #else
 
         return -1;
@@ -4378,4 +4378,4 @@ evhtp_make_request(evhtp_connection_t *
 unsigned int
 evhtp_request_status(evhtp_request_t * r) {
     return htparser_get_status(r->conn->parser);
-}
\ No newline at end of file
+}
