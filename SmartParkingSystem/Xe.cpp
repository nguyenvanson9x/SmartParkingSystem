#include "StdAfx.h"
#include "Xe.h"

using namespace SmartParkingSystem;
Xe::Xe(void){

}
Xe::Xe(int Id, String ^bien_so, String ^thoigianvao, String ^thoigianra, String ^giave, String ^loaive, String ^loaixe){
	id=Id;
	bks=bien_so;
	thoi_gian_vao=thoigianvao;
	thoi_gian_ra=thoigianra;
	gia_ve=giave;
	loai_ve=loaive;
	loai_xe=loaixe;
};
