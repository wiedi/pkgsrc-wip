# $NetBSD$
#

DISTNAME=	# SVN package
PKGNAME=	libcpu-0
CATEGORIES=	devel
MASTER_SITES=	# SVN package

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.libcpu.org/
COMMENT=	Anything-to-anything binary translation library

USE_TOOLS+=	gmake flex bison
USE_LANGUAGES+=	c c++
WRKSRC=		${WRKDIR}/libcpu

BUILDLINK_TRANSFORM+=	rm:-Werror

SVN_REPOSITORIES=	libcpu
SVN_ROOT.libcpu=	https://svn.libcpu.org/libcpu/trunk/
SVN_MODULE.libcpu=	libcpu
SVN_CERTS=		${FILESDIR}/7ca4b79223f0e21f5a54209fea0d32f7

.include "../../wip/mk/svn-package.mk"
.include "../../devel/cmake/buildlink3.mk"
.include "../../lang/clang/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
