# $FreeBSD$

PORTNAME=	plasma-framework
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11 kde kde-frameworks

PATCH_SITES=	https://invent.kde.org/frameworks/plasma-framework/commit/
PATCHFILES=	b1364fa601866792ecf69cf61b8ab48732150857.diff:-p1

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 plugin based UI runtime used to write user interfaces

USES=		cmake compiler:c++11-lib gettext gl kde:5 pkgconfig qt:5 tar:xz xorg
USE_GL=		egl gl
USE_KDE=	activities archive auth codecs completion config \
		configwidgets coreaddons dbusaddons doctools globalaccel \
		guiaddons i18n iconthemes jobwidgets kirigami2 kio package \
		notifications service wayland windowsystem xmlgui kdeclarative \
		widgetsaddons
USE_QT=		buildtools_build concurrent core dbus declarative gui network qmake_build \
		script sql svg widgets x11extras xml
USE_XORG=	ice sm x11 xcb xext xrandr

.include <bsd.port.mk>
