# $NetBSD$

BUILDLINK_TREE+=	py-amqplib

.if !defined(PY_AMQPLIB_BUILDLINK3_MK)
PY_AMQPLIB_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.py-amqplib+=	py-amqplib>=0.6
BUILDLINK_PKGSRCDIR.py-amqplib?=	../../wip/py-amqplib
.endif	# PY_AMQPLIB_BUILDLINK3_MK

BUILDLINK_TREE+=	-py-amqplib
