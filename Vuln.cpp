buffer = (in_t *)irp->AssociatedIrp.SystemBuffer;
irp->IoStatus.Status =
irp->IoStatus. . Information = 0i64;
size = v2->Parameters.Create.Options;
if ( v2->MajorFunction != 14 )
goto LABEL_45;
v7 = v2->Parameters.Read.ByteOffset.LowPart;
switch (V7)
f
case 0x80102040:
if ( (int)sub_14000175C() < 0 || !(_DWORD)size )
goto LABEL_43;
memmove(&local_buf_cpy, buffer, size);
status = MapPhysMem( (PHYSICAL. ADDRESS)1ocal_ buf_cpy .addr, local_t buf_cpy . size, &virtAddrsaved, , &Handle, &a5
if ( status > D )
memmove(buffer, &local_buf_cpy, size);
irp->IoStatus.Information = size;
irp->Iostatus.Status = status;
break;
case 0x80102044:
if ( (int)sub_14000175C() >= 0 && (_DWORD)size )// unmap
P
memmove(&local_buf_cpy, buffer, size);
v3 = sub_140001A74(Handle, virtAddrsaved, a5);
goto LABEL 44;
