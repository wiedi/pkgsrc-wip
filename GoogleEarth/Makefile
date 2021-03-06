# $NetBSD$

DISTNAME=		GoogleEarthLinux.bin
PKGNAME=		GoogleEarth-${GE_VERSION}
CATEGORIES=		geography x11
MASTER_SITES=		http://dl.google.com/earth/client/advanced/previous/
EXTRACT_SUFX=

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://earth.google.com/
COMMENT=		Interactive browser for satellite imagery and maps
LICENSE=		google-earth-license

LICENSE_FILE=		${FILESDIR}/google-earth-license
RESTRICTED=		No redistribution allowed
NO_BIN_ON_CDROM=	${RESTRICTED}
NO_BIN_ON_FTP=		${RESTRICTED}
NO_SRC_ON_CDROM=	${RESTRICTED}
NO_SRC_ON_FTP=		${RESTRICTED}

DEPENDS+=		vera-ttf>=1.10:../../fonts/vera-ttf

EMUL_PLATFORMS=		linux-i386
EMUL_MODULES.linux=	fontconfig glx gtk2 qt4

NOT_FOR_PLATFORM=	NetBSD-[0-2]*-*

GE_VERSION=		5.2.1.1588
NO_CONFIGURE=		yes
WRKSRC=			${WRKDIR}/GoogleEarthLinuxPlus-${GE_VERSION}-installer
DIST_SUBDIR=		${PKGNAME_NOREV}
EXTRACT_CMD=		${SH} "$$extract_file" --noexec --keep

INSTALLATION_DIRS=	bin

USE_TOOLS+=		pax

do-build:
	cd ${WRKSRC} && ${MKDIR} GoogleEarth && cd GoogleEarth && \
	pax -r -f ../googleearth-linux-x86.tar && \
	pax -r -f ../googleearth-data.tar && \
	${CP} ../*.xpm ../*.png ../bin/googleearth . && \
	${FIND} . -type f | ${XARGS} ${CHMOD} -x && \
	${CHMOD} +x googleearth googleearth-bin *.so*
	printf '#! /bin/sh\nexec ${PREFIX}/GoogleEarth/googleearth "$$@"\n' > \
	${WRKDIR}/googleearth

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/googleearth ${DESTDIR}${PREFIX}/bin/googleearth
	cd ${WRKSRC} && pax -rw GoogleEarth ${DESTDIR}${PREFIX}

.include "../../mk/bsd.pkg.mk"
