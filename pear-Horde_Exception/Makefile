# $NetBSD$
#

DISTNAME=	Horde_Exception-1.0.9
CATEGORIES=	devel
MASTER_SITES=	http://pear.horde.org/get/

MAINTAINER=	frederic@fauberteau.org
HOMEPAGE=	http://pear.horde.org/
COMMENT=	Default exception handlers for Horde
LICENSE=	gnu-lgpl-v2.1

BUILD_DEPENDS+=	${PHP_PKG_PREFIX}-pear-channel-horde-[0-9]*:../../wip/pear-channel-horde
DEPENDS+=	${PHP_PKG_PREFIX}-pear-Horde_Translation-[0-9]*:../../wip/pear-Horde_Translation

.include "../../lang/php/pear.mk"
.include "../../mk/bsd.pkg.mk"
