# $NetBSD$
#

DISTNAME=		passepartout-0.3
PKGREVISION=		3
CATEGORIES=		print
MASTER_SITES=		http://www.stacken.kth.se/project/pptout/files/
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		reed@reedmedia.net
HOMEPAGE=		http://www.stacken.kth.se/project/pptout/
COMMENT=		Desktop publishing for X

PKG_DESTDIR_SUPPORT=	none

USE_TOOLS+=		gs:run
USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes

BUILDLINK_TRANSFORM+=	S:-Wold-style-casts:

.include "../../x11/gtkmm/buildlink3.mk"
.include "../../textproc/libxslt/buildlink3.mk"
.include "../../textproc/libxml++1/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
