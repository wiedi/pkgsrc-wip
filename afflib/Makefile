# $NetBSD$
#

DISTNAME=		afflib-1.6.31
PKGREVISION=		3
CATEGORIES=		devel
MASTER_SITES=		http://www.afflib.org/downloads/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.afflib.org/downloads/
COMMENT=		Advanced Forensic Format library

USE_LANGUAGES= c++

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/aimage/aimage ${DESTDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/aimage/ident ${DESTDIR}${PREFIX}/bin
	for tool in afcat afcompare afconvert affix afinfo afsegment afstats afxml ; do \
	${INSTALL_PROGRAM} ${WRKSRC}/tools/$$tool ${DESTDIR}${PREFIX}/bin ; done
	${INSTALL_DATA} ${WRKSRC}/lib/libafflib.a ${DESTDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/lib/afflib.h ${DESTDIR}${PREFIX}/include

.include "../../security/openssl/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../devel/readline/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
