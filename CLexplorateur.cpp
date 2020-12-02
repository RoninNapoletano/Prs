#include "pch.h"
#include "CLexplorateur.h"


namespace NS_composants
{
	array<String^>^ CLfichier::explorerUnDossier(String^ dossier)
	{
		String^ folder = "C:\\";
		array<String^>^ dir = Directory::GetDirectories(folder);
		Console::WriteLine("--== Directories inside '{0}' ==--", folder);
		for (int i = 0; i < dir->Length; i++)
			Console::WriteLine(dir[i]);

		array<String^>^ file = Directory::GetFiles(folder);
		Console::WriteLine("--== Files inside '{0}' ==--", folder);
		for (int i = 0; i < file->Length; i++)
			Console::WriteLine(file[i]);

		return file;
	} //return file; 

	void CLfichier::effacer(String^ fichier)
	{
		System::IO::File::Delete(fichier);
	}
	void CLfichier::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension;
		nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);
		System::IO::File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
	}
}
