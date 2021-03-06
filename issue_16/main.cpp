#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv/cvaux.h>
#include <opencv/cxcore.h>
#include <opencv/ml.h>
#include <stdlib.h>
#include <stdio.h>
using namespace cv;
using namespace std;

Mat histograma(Mat imagem){
    int vet[256],x,y,num;
    int ma=0;
    
    for (x=0; x<256; x++)
        vet[x]=0;
    
    for (x=0; x<imagem.rows; x++){
        for (y=0; y<imagem.cols; y++){
            num=0;
            num=imagem.at<uchar>(x,y);
            vet[num]++;
        }
    }
    
    for (x=0; x<256; x++) {
        if (ma==0)
            ma=vet[x];
        if (vet[x]>ma)
            ma=vet[x];
    }
    
    int max=ma/200;
    for (x=0; x<256; x++) {
        vet[x]=vet[x]/max;
    }
    
    Mat_<Vec3b> histogram(200,256,CV_8UC3);
    for (x=0; x<histogram.rows; x++) {
        for (y=0; y<histogram.cols; y++) {
            if (x>=histogram.rows-vet[y]) {
                histogram(x,y)[0]=0;
                histogram(x,y)[1]=0;
                histogram(x,y)[2]=0;
            }
            else{
                histogram(x,y)[0]=255;
                histogram(x,y)[1]=255;
                histogram(x,y)[2]=255;
            }
        }
    }
    return histogram;
}

int main(){
    Mat image=imread("/Users/iMacPedrosa/Desktop/PDI_LISTA/arara.jpg",1);
    cvtColor(image, image, CV_RGB2GRAY);
    Mat hist,equalized,hist_equalizado;
    equalizeHist(image, equalized);
    
    hist= histograma(image);
    hist_equalizado= histograma(equalized);
    
    imshow("Imagem", image);
    imshow("Imagem Equalizada", equalized);
    imshow("Histograma_Imagem", hist);
    imshow("Histograma_Image_Equalizada", hist_equalizado);
    
    imwrite("/Users/iMacPedrosa/Desktop/PDI_LISTA/image_gray.jpg", image);
    imwrite("/Users/iMacPedrosa/Desktop/PDI_LISTA/image_equalized.jpg", equalized);
    imwrite("/Users/iMacPedrosa/Desktop/PDI_LISTA/histogram_image_gray.jpg", hist);
    imwrite("/Users/iMacPedrosa/Desktop/PDI_LISTA/histogram_image_equalized.jpg", hist_equalizado);
    waitKey();
}