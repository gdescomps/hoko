#ifndef FLOUGAUSSIEN_H
#define FLOUGAUSSIEN_H

#include "Traitement.h"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

class FlouGaussien : public Traitement{
	private:

	public:
		FlouGaussien(GestionTraitement* gestionTraitement, cv::Mat imageEntree, bool ouvrirFenetre=true);
		~FlouGaussien() {}

		virtual void appliquer(list<Valeur> valeurs);

		virtual cv::Mat maj(cv::Mat imageEntree);
		virtual void modifier();


};

#endif // FLOUGAUSSIEN_H