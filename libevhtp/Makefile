# $NetBSD$
VERSION=	1.2.11n
PKGNAME=	libevhtp-${VERSION}
CATEGORIES=	www
GITHUB_TAG=	${VERSION}
DISTNAME=	${GITHUB_TAG}
MASTER_SITES=	${MASTER_SITE_GITHUB:=criticalstack/}

MAINTAINER=	amoibos@gmail.com
HOMEPAGE=	https://github.com/criticalstack/libevhtp/
COMMENT=	Flexible replacement for libevent's httpd API
LICENSE=	modified-bsd

DIST_SUBDIR=	libevhtp
WRKSRC=		${WRKDIR}/${PKGNAME_NOREV}

USE_LANGUAGES+=	c99 c++
USE_CMAKE=	yes

# the only current consumer (seafile-server/seafile-client) requires
# these options.
CMAKE_ARGS+=	-DEVHTP_DISABLE_SSL=ON -DEVHTP_BUILD_SHARED=OFF

.include "../../devel/libevent/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
