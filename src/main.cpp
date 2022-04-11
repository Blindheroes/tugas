#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl; //di ganti dari mahasiswa ke dosen
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;//di ganti dari mahasiswa ke tendik
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  7. Berhenti" << endl;//biar berhenti
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;


		

		
		switch (menu_terpilih) {
			case 1:
				{
					int dd, mm, yy, tahunMasuk , semester,SKS_lulus;
					string id, nama, departemen ,nrp;
					cout<< "input id               :";
					cin>>id;
					cout<<"input NRP               : ";
					cin>>nrp;
					cout<<"input nama              : ";
					cin>>nama;
					cout<<"input tangal lahir (dd) : ";
					cin>>dd;
					cout<<"input bulan lahir (mm)  : ";
					cin>>mm;
					cout<<"input tahun lahir (yy)  : ";
					cin>>yy;
					cout<<"input departemen        : ";
					cin>>departemen;
					cout<<"input tahun masuk       : ";
					cin>>tahunMasuk;
					cout<<"input Semester sekarang : ";
					cin>>semester;
					cout<<"input SKS lulus         : ";
					cin>>SKS_lulus;


					mahasiswa Mahasiswa( id,  nama, dd, mm, yy, nrp,  departemen, tahunMasuk);//kosntrutornya
					
					Mahasiswa.setSemester(semester); //pakai fungsi get karena ga ada di construktor
					Mahasiswa.setSKSLulus(SKS_lulus);//pakai fungsi get karena ga ada di construktor
					recMhs.push_back(Mahasiswa);// vector buat tambahin di belakang
				}
				break;
			case 2:
				{
					int dd, mm, yy, pendidikan ;
					string id, nama, departemen ,npp;
					cout<< "input id               :";
					cin>>id;
					cout<<"input NPP               : ";
					cin>>npp;
					cout<<"input nama              : ";
					cin>>nama;
					cout<<"input tangal lahir (dd) : ";
					cin>>dd;
					cout<<"input bulan lahir (mm)  : ";
					cin>>mm;
					cout<<"input tahun lahir (yy)  : ";
					cin>>yy;
					cout<<"input departemen        : ";
					cin>>departemen;
					cout<<"input pendidikan        : ";
					cin>>pendidikan;
					


					dosen Dosen(  id,  nama,  dd,  mm,  yy,  npp,  departemen,  pendidikan);//kosntrutornya
					
					Dosen.setPendidikan(pendidikan); //pakai fungsi get karena ga ada di construktor
				
					recDosen.push_back(Dosen);// vector buat tambahin di belakang
				}
				
				break;
			case 3:
				{
					int dd, mm, yy ;
					string id, nama, unit ,npp;
					cout<< "input id               :";
					cin>>id;
					cout<<"input NPP               : ";
					cin>>npp;
					cout<<"input nama              : ";
					cin>>nama;
					cout<<"input tangal lahir (dd) : ";
					cin>>dd;
					cout<<"input bulan lahir (mm)  : ";
					cin>>mm;
					cout<<"input tahun lahir (yy)  : ";
					cin>>yy;
					cout<<"input unit              : ";
					cin>>unit;
			

					tendik Tendik( id,  nama,  dd,  mm,  yy,  npp,  unit);
					recTendik.push_back(Tendik);
				}
				
				break;
			case 4:
				{
					cout<<"========================================================="<<endl;
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout <<" \n\n"<<endl;
						cout << "ID           : " << recMhs[i].getId() << endl;
						cout << "NRP          : " << recMhs[i].getNrp() << endl;
						cout << "Nama         : " << recMhs[i].getNama() << endl;
						cout << "tanggal lahir: " << recMhs[i].getTglLahir();
						cout << " / " << recMhs[i].getBulanLahir();
						cout << " / " << recMhs[i].getTahunLahir() << endl;
						cout << "Departemen   : " << recMhs[i].getDepartemen() << endl; 
						cout << "semester     : " << recMhs[i].getSemester() << endl; 
						cout << "SKS lulus    : " << recMhs[i].getSKSLulus() << endl; 
					}
					cout<<"========================================================="<<endl;
				}
				break;
			case 5:
				{
					cout<<"========================================================="<<endl;
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout <<" \n\n"<<endl;
						cout << "ID           : " << recDosen[i].getId() << endl;
						cout << "NPP          : " << recDosen[i].getNpp() << endl;
						cout << "Nama         : " << recDosen[i].getNama() << endl;
						cout << "tanggal lahir: " << recDosen[i].getTglLahir();
						cout << " / " << recDosen[i].getBulanLahir();
						cout << " / " << recDosen[i].getTahunLahir() << endl;
						cout << "Pendidikan   : " << recDosen[i].getPendidikan() << endl; 
			
					}
					cout<<"========================================================="<<endl;
				}
				break;
			case 6:
				{
					cout<<"========================================================="<<endl;
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout <<" \n\n"<<endl;
						cout << "ID           : " << recTendik[i].getId() << endl;
						cout << "NPP          : " << recTendik[i].getNPP() << endl;
						cout << "Nama         : " << recTendik[i].getNama() << endl;
						cout << "tanggal lahir: " << recTendik[i].getTglLahir();
						cout << " / " << recTendik[i].getBulanLahir();
						cout << " / " << recTendik[i].getTahunLahir() << endl;
						cout << "Unit         : " << recTendik[i].getUnit() << endl; 
					}
					cout<<"========================================================="<<endl;
				}
				break;
			case 7:{
				return 0;//biar berhenti
			}
		}
	}

	return 0;
}
