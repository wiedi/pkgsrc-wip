# $NetBSD$
#

DISTNAME=	tcc-devel-${TCC_VER}
CATEGORIES=	lang

MAINTAINER=	rumcic@gmail.com
HOMEPAGE=	http://www.tinycc.org/
COMMENT=	The Smallest ANSI C compiler

PKG_DESTDIR_SUPPORT=	none

USE_TOOLS+=	gmake
HAS_CONFIGURE=	yes
NO_CHECKSUM=	yes
REPLACE_PERL+=	texi2pod.pl

.include "../../mk/bsd.prefs.mk"

TCC_VER!=	${DATE} +%Y%m%d

.if ${OPSYS} != "Linux"
SUBST_CLASSES+=		ldl
SUBST_FILES.ldl=	Makefile
SUBST_STAGE.ldl=	post-patch
SUBST_SED.ldl=		-e 's,LIBS=,\#LIBS,'
.endif

CONFIGURE_ARGS+=	--prefix=${PREFIX:Q}

HG_REPOSITORIES=	tcc
HG_REPO.tcc=		http://landley.net/hg/tinycc

WRKSRC=		${WRKDIR}/tinycc

.include "../../wip/mk/hg-package.mk"
.include "../../mk/bsd.pkg.mk"
