////实现扫雷思路
////来一个10*10的扫雷
////**********
////**********
////**********
////**********
////**********
////**********
////**********
////**********
////**********
////**********
////1.也就是一个数组char arr1[10][10],其中所有元素都是*
////2.再创建一个空白数组char arr2[10][10]，随机产生10个坐标，将该10个坐标赋值'#’
////3.开始游戏，输入坐标，对应坐标如果是*，就将'*'改为' '，在输出一次方阵
////  如果输入的坐标在arr2中是'#'，就将'#'赋值给arr1再输出方阵，游戏失败
////4.如果到最后对所有的坐标扫描一遍都没有*号就判定游戏成功
//
////5.展开算法
////  如果该坐标周围有雷就返回数字
////  如果没有雷就去排查周围八个坐标的周围有没有雷
//#include "mineSweeper.h"
//
//void mineSweeper(){
//	//创建两个10*10的方阵
//	char arr1[ROW][COL];
//	char arr2[ROW][COL];
//	//设置时间戳为随机的种子
//	srand((unsigned int)time(NULL));
//	
//	//初始化方阵,所有元素赋值为@
//	init_arr(arr1,ROW,COL);
//	//在另一个方阵里随机生成mine_num个雷
//	random_mine(arr2,ROW,COL);
//	//输出方阵
//	display_arr(arr2,ROW,COL);          //查看雷的位置
//
//	display_arr(arr1,ROW,COL);
//	//排雷+判断
//	//输入要排的目标坐标
//	findMine(arr1,arr2,ROW,COL);
//	//判断ret的值
//	
//}
//main(){
//	int menu_choice;
//	do{
//		menu();
//		scanf("%d",&menu_choice);
//		switch(menu_choice){
//		case 1:
//			mineSweeper();
//			break;
//		case 0:
//			printf("***************************退出游戏*************************\n");
//			break;
//		default:
//			printf("*******************选择错误，请重新选择！*******************\n");
//			break;
//		}
//	}while(menu_choice);
//}