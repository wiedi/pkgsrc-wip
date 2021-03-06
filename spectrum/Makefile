# $NetBSD: Makefile-example,v 1.18 2009/05/18 17:09:43 agc Exp $

DISTNAME=		spectrum-1.4.7
CATEGORIES=		chat
MASTER_SITES=		http://spectrum.im/attachments/download/37/

MAINTAINER=		eric@cirr.com
HOMEPAGE=		http://spectrum.im/
COMMENT=		XMPP transport/gateway based on libpurple
LICENSE=		gnu-gpl-v3

DEPENDS+=		${PYPKGPREFIX}-xmpppy>=0.4.1:../../wip/py-xmpppy
DEPENDS+=		${PYPKGPREFIX}-expat>=0nb4:../../textproc/py-expat
DEPENDS+=		${PYPKGPREFIX}-readline>=0nb2:../../devel/py-readline

USE_TOOLS+=		pkg-config msgfmt xgettext
USE_CMAKE=		yes
USE_LANGUAGES=		c++ c

REPLACE_PYTHON+=	spectrumctl/spectrumctl.py
PY_PATCHPLIST=		yes

.include "../../wip/jabberd/transports.mk"

PKG_SYSCONFSUBDIR=	spectrum
EGDIR=			${PREFIX}/share/examples/spectrum
# DOCDIR=			${PREFIX}/share/doc/spectrum
RCD_SCRIPTS=		spectrum

CONF_FILES+=		${EGDIR}/spectrum.cfg ${PKG_SYSCONFDIR}/spectrum.cfg

.include "options.mk"

SUBST_CLASSES+=		cfgpath
SUBST_STAGE.cfgpath=	post-patch
SUBST_FILES.cfgpath+=	src/configfile.cpp
SUBST_FILES.cfgpath+=	tools/migrate-db/main.cpp
SUBST_FILES.cfgpath+=	spectrumctl/spectrumctl.py
SUBST_FILES.cfgpath+=	man/spectrumctl.8
SUBST_MESSAGE.cfgpath=	Correcting configuration directory
SUBST_SED.cfgpath=	-e 's,/etc/spectrum,${PKG_SYSCONFDIR},g'
SUBST_SED.cfgpath+=	-e 's,@ETC_SPECTRUM@,${PKG_SYSCONFDIR},g'

SUBST_CLASSES+=		manpath
SUBST_STAGE.manpath=	post-patch
SUBST_FILES.manpath=	CMakeLists.txt
SUBST_MESSAGE.manpath=	Correcting man page directory
SUBST_SED.manpath+=	-e 's,@PKGMANDIR@,${PKGMANDIR},g'

SUBST_CLASSES+=		users
SUBST_STAGE.users=	post-patch
SUBST_FILES.users=	spectrumctl/spectrumctl.py
SUBST_FILES.users+=	spectrumctl/spectrum/env.py
SUBST_FILES.users+=	man/spectrumctl.8
SUBST_MESSAGE.users=	Correcting spectrum user
SUBST_SED.users=	-e 's/@SPECTRUM_USER@/${JABBER_USER}/g'

MESSAGE_SUBST+=		EGDIR=${EGDIR}
MESSAGE_SUBST+=		PREFIX=${PREFIX}
MESSAGE_SUBST+=		PKG_SYSCONFDIR=${PKG_SYSCONFDIR}

FILES_SUBST+=		PREFIX=${PREFIX}
FILES_SUBST+=		JABBER_USER=${JABBER_USER}

INSTALLATION_DIRS=	bin ${PKG_SYSCONFDIR}
INSTALLATION_DIRS+=	share/locales
INSTALLATION_DIRS+=	${EGDIR}
# INSTALLATION_DIRS+=	${DOCDIR}

pre-install:
	${RM} -f ${WRKSRC}/spectrumctl/spectrumctl.py.orig
	${RM} -f ${WRKSRC}/spectrumctl/spectrum/env.py.orig
	${MKDIR} ${DESTDIR}${PKG_SYSCONFDIR}

post-install:
	${INSTALL_DATA} ${WRKSRC}/ChangeLog ${DESTDIR}${EGDIR}
	${INSTALL_DATA} ${WRKSRC}/spectrum.cfg ${DESTDIR}${EGDIR}
	${INSTALL_DATA} ${WRKSRC}/schemas/mysql_schema.sql \
					${DESTDIR}${EGDIR}/spectrum-mysql.sql
	# ${INSTALL_DATA} ${WRKSRC}/schemas/sqlite_schema.sql \
	# 				${DESTDIR}${EGDIR}/spectrum-sqlite3.sql


.include "../../chat/libpurple/buildlink3.mk"
.include "../../devel/cmake/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../graphics/ImageMagick/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../lang/python/extension.mk"
.include "../../chat/gloox/buildlink3.mk"
.include "../../devel/poco/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
