$NetBSD$

--- src/xwindisp.c.orig	2000-09-28 11:03:56.000000000 +0000
+++ src/xwindisp.c
@@ -1281,8 +1281,9 @@ xWin_display_cycle()
         break;
 
       case 'd':
-        sighandler(0);                /* ??? debugState = STEP; *//* stepping =
+        /*sighandler(0);*/                /* ??? debugState = STEP; *//* stepping =
                                  * FALSE; */
+        fprintf(stderr, "unsupported");
         break;
 
       case '>':