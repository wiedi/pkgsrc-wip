# $NetBSD$
#

DISTNAME=	nose_scenario-0.1.3.tar
EGG_NAME=	${DISTNAME:S/.tar//}
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/.tar//}
CATEGORIES=	devel python
MASTER_SITES=	http://pypi.python.org/packages/source/n/nose_scenario/
EXTRACT_SUFX=	.gz

MAINTAINER=	kamel.derouiche@gmail.com
HOMEPAGE=	http://cheeseshop.python.org/pypi/nose_scenario/
COMMENT=	Nose plugin test unittest scenario adapt
LICENSE=	gnu-gpl-v2

DEPENDS+=	${PYPKGPREFIX}-nose>=0.11.3:../../devel/py-nose

WRKSRC=		${WRKDIR}/nose_scenario-0.1.3
USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
