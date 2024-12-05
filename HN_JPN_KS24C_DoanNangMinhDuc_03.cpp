#include <stdio.h>

int main(){
	int matrix[100][100];
    	int rows = 0, cols = 0;
		int c;
		while(1) {
				printf("CHON 1 LUA CHON TRONG MENU.\n");
			printf("\n-------MENU-------\n");
			printf("1-Nhap so gia tri phan tu vao mang.\n");
			printf("2-In ra gia tri cac phan tu trong mang theo tung dong.\n");
			printf("3-Dem so Luong cac nguyen to co trong mang.\n");
			printf("4-Tim gia tri nho thu hai trong mang.\n");
			printf("5-Them mot phan tu ngau nhien vao trong mang,phan tu moi them vao phai do nguoi dung nhap.\n");
			printf("6-Xoa phan tu tai 1 vi tri cu the(ng dung nhap vi tri).\n");
			printf("7-Xap xep mang theo thu tu giam dan.\n");
			printf("8-Nguoi dung nhap 1 phan tu, de tim kiem phan tu trong mang.\n");
			printf("9-Xoa toan bo phan tu trong mang, chi giu so doc nhat trong mang.\n");
			printf("10-Dao nguoc thu tu trong mang.\n");
			printf("11-Thoat chuong trinh.\n");
		int choice;
		
        scanf("%d", &choice);
        if (choice== 11) {
            printf("11-Thoat chuong trinh.");
            break;
            
        }
        
         switch (choice) {
         	case 1: {
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);

                if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
                    printf("Kich thuoc khong hop le!\n");
                    rows = cols = 0;
                    break;
                } 
				
		}
		 }
		 switch (choice){
		 	case 2: {
			 printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("[%d][%d] = ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }
                break;        
		 }
	 }
	 	switch (choice){
	 		case 3: {
	 			printf("So luong nguyen to trong mang la:\n");
	 			
	 			
				break;
			 }
		 }
}
			
		
		 
		 
		 
		 
		
		 
		
            
	
		
	
		
		return 0;
	
}
		
	
		
	
