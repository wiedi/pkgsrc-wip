# $NetBSD$
#

DISTNAME=	unpaper-0.3
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=unpaper.berlios/}

MAINTAINER=	kamelderouiche@yahoo.com
HOMEPAGE=	http://unpaper.berlios.de/
COMMENT=	Post-processing scanned and photocopied book pages
LICENSE=	gnu-gpl-v2

USE_TOOLS+= bash

SUBST_CLASSES+=		paths
SUBST_STAGE.paths=	pre-configure
SUBST_SED.paths+=	-e 's,/usr/local/bin,${DESTDIR}${PREFIX}/bin,g'
SUBST_FILES.paths+=	make.sh
SUBST_MESSAGE.paths=	Fixing header search paths.

INSTALLATION_DIRS= bin

do-build:
	cd ${WRKSRC}/src; ${CC} ${CFLAGS} -DUNIX -o unpaper unpaper.c -lm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/unpaper ${DESTDIR}${PREFIX}/bin

.include "../../mk/bsd.pkg.mk"
