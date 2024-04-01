#include <stdio.h>

int main() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  int so_chinh_phuong = dem_so_chinh_phuong(n);
  printf("So luong so chinh phuong nho hon %d la: %d\n", n, so_chinh_phuong);

  printf("Danh sach cac so chinh phuong nho hon %d la:\n", n);
  for (int i = 1; i <= n; i++) {
    if (kiem_tra_so_chinh_phuong(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
int dem_so_chinh_phuong(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (kiem_tra_so_chinh_phuong(i)) {
      count++;
    }
  }
  return count;
}
int kiem_tra_so_chinh_phuong(int n) {
  int i = 1;
  while (i * i <= n) {
    if (i * i == n) {
      return 1;
    }
    i++;
  }
  return 0;
}
