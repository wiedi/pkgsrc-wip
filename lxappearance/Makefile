# $NetBSD$

DISTNAME=	lxappearance-0.5.2
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=lxde/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://lxde.sourceforge.net/
COMMENT=	GTK+ theme switcher

#DEPENDS+=	lxmenu-data-[0-9]*:../../wip/lxmenu-data

LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
#USE_LIBTOOL=	yes
#USE_TOOLS+=	perl pkg-config
USE_TOOLS+=	intltool pkg-config


.include "../../sysutils/desktop-file-utils/desktopdb.mk"
#.include "../../devel/glib2/buildlink3.mk"
#.include "../../devel/libwnck/buildlink3.mk"
#.include "../../wip/menu-cache/buildlink3.mk"
#.include "../../graphics/gdk-pixbuf2-xlib/buildlink3.mk"
#.include "../../sysutils/dbus/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
